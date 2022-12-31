//
// Created by St.Petrov on 5.8.2022 г..
//

#ifndef CLION_AVERAGEAGGREGATOR_H
#define CLION_AVERAGEAGGREGATOR_H

#include "Aggregator.h"

class AverageAggregator : public StreamAggregator {
    int sums;
public:

    AverageAggregator(std::istream& stream) : StreamAggregator(stream), sums(0) {}

    virtual ~AverageAggregator() = default;

    virtual void aggregate(int next)
    {
        StreamAggregator::aggregate(next);
        sums+=next;
        aggregationResult = sums / getNumAggregated();
    }
};

#endif //CLION_AVERAGEAGGREGATOR_H
