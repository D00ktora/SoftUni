//
// Created by St.Petrov on 5.8.2022 г..
//

#ifndef CLION_MINAGGREGATOR_H
#define CLION_MINAGGREGATOR_H


#include "Aggregator.h"

class MinAggregator : public StreamAggregator {

public:
    MinAggregator(std::istream& stream) : StreamAggregator(stream){}

    virtual ~MinAggregator() = default;

    virtual void aggregate(int next)
    {
        StreamAggregator::aggregate(next);
        if (getNumAggregated() == 1 || getAggregationResult() > next)
        {
            aggregationResult = next;
        }
    }
};

#endif //CLION_MINAGGREGATOR_H
