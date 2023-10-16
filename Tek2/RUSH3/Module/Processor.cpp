/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** Processor
*/

#include "Processor.hpp"

Processor::Processor()
{
}

Processor::~Processor()
{
}

std::string Processor::getModel() const
{
    return (_model);
}

std::string Processor::getFrequency() const
{
    return (_frequency);
}

std::string Processor::getCore() const
{
    return (_core);
}

std::string Processor::getUsage() const
{
    return (_usage);
}

void Processor::setModel()
{
    std::string line;
    std::ifstream file("/proc/cpuinfo");
    unsigned int nbCore = 0;
    bool status = false;

    while (std::getline(file, line)) {
        if (!status && line.find("model name") != std::string::npos) {
            _model = line.substr(line.find(":") + 2);
            status = true;
        }
        if (line.find("processor") != std::string::npos)
            nbCore++;
    }
    _core = std::to_string(nbCore);
}

std::deque<std::string> Processor::getCpuInfos()
{
    std::ifstream stream("/proc/stat");
    std::deque<std::string> que;
    std::string tmp, skip, info;
    if (stream.is_open()) {
        getline(stream, info);
        std::istringstream linest(info);
        linest >> skip;
        for (int i = 0; i < 10; i++) {
            linest >> tmp;
            que.push_back(tmp);
        }
    }
    return que;
}

long Processor::maxUsageCPU()
{
    std::deque<std::string> infos = getCpuInfos();
    long max_usage = 0;
    long idle = std::stoi(infos[3]);
    long iowait = std::stoi(infos[4]);
    max_usage = idle + iowait;
    return max_usage;
}

float Processor::percentageActualUsageCPU()
{
    std::deque<std::string> infos = getCpuInfos();
    long usage_s = 0;
    for(std::string tmp : infos)
        usage_s += std::stoi(tmp);
    float percent = (float)(usage_s - maxUsageCPU())/maxUsageCPU();
    return percent;
}
