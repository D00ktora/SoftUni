//
// Created by St.Petrov on 5.8.2022 г..
//

#ifndef CLION_SUMAGGREGATOR_H
#define CLION_SUMAGGREGATOR_H

class SumAggregator : public StreamAggregator {

public:
    SumAggregator(std::istream& stream) : StreamAggregator(stream) {aggregationResult = 0; }

    virtual ~SumAggregator() = default;

    virtual void aggregate(int next)
    {
        StreamAggregator::aggregate(next);
        aggregationResult += next;
    }
};

#endif //CLION_SUMAGGREGATOR_H
