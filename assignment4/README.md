# Assignment 4 Results

I chose to model my methods after the wk6lec12 example, which compares basic arithmetic using C++ data types and ap_int data types. 
The modifications I made are extending the implementation to work with array inputs and outputs. 
In order to not get ? results for latency and trip count, I needed to add the following pragma: `#pragma HLS loop_tripcount min=1 max=ARRAY_SIZE`.
I used the part `virtex7` and used a clock with a 10ns period.
For the test bench, I used one array of 20 elements to compare.
The below table compares the two implementations using different data types (no other differences betweent the two):

|                      | C++ types | ap_int types |
|----------------------|-----------|--------------|
| Latency (cycles) min | 72        | 41           |
| Latency (cycles) min | 91        | 60           |
| Latency min          | 0.720us   | 0.410us      |
| Latency max          | 0.910us   | 0.600us      |
| Total DSP            | 1         | 1            |
| Total FF             | 11296     | 3908         |
| Total LUT            | 8529      | 2956         |

Using ap_int, the both the latency and resource utlization go down. 
The resource utilization goes down by a lot, because operations with the C++ data types use arbitrary precision, causing more LUTs and registers to be used than needed. 
This demonstrates that using different data types can lead to the same results but much better efficiency.
