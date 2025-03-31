# Assignment 5 Results

I chose to multiply a 20x24 matrix by a 24x10 matrix.
For the `HLS INTERFACE` pragma, I chose to use the following:
```
#pragma HLS INTERFACE bram port=inA
#pragma HLS INTERFACE bram port=inB
#pragma HLS INTERFACE bram port=out
#pragma HLS INTERFACE s_axilite port=return
```

I also tried `m_axi` for the array ports, but this resulted in much higher latency.
The results comparing 1d and 2d partitioning are below:

|                   | 2-dimensional partition | 1-dimensional partition |
|-------------------|-------------------------|-------------------------|
| Latency (cycles)  | 2403                    | 2403                    |
| Latency           | 24.030us                | 24.030us                |
| Iteration latency | 14                      | 14                      |
| Total DSP         | 1                       | 1                       |
| Total FF          | 602                     | 673                     |
| Total LUT         | 4186                    | 6703                    |

In this case, the different partitioning had no effect on latency, but the resource utilization is a bit worse for the 2d case.
