/*
 0  1  2  3  4  5      6  7  8  9 10 11          LT5 LT4 LT3 LT2 LT1 LT0     RT0 RT1 RT2 RT3 RT4 RT5   top row
12 13 14 15 16 17     18 19 20 21 22 23          LM5 LM4 LM3 LM2 LM1 LM0     RM0 RM1 RM2 RM3 RM4 RM5   middle row
24 25 26 27 28 29     30 31 32 33 34 35          LB5 LB4 LB3 LB2 LB1 LB0     RB0 RB1 RB2 RB3 RB3 RB4   bottom row
         36 37 38     39 40 41                           LT3 LT2 LT1 LT0     RT0 RT1 RT2 RT3           thumb cluster row
*/

#pragma once

// --- LEFT SIDE ---

// Top Row (LT)
#define LT5  0
#define LT4  1
#define LT3  2
#define LT2  3
#define LT1  4
#define LT0  5

// Middle Row (LM)
#define LM5 12
#define LM4 13
#define LM3 14
#define LM2 15
#define LM1 16
#define LM0 17

// Bottom Row (LB)
#define LB5 24
#define LB4 25
#define LB3 26
#define LB2 27
#define LB1 28
#define LB0 29

// Thumb Cluster (LH)
#define LH2 36
#define LH1 37
#define LH0 38


// --- RIGHT SIDE ---

// Top Row (RT)
#define RT0  6
#define RT1  7
#define RT2  8
#define RT3  9
#define RT4 10
#define RT5 11

// Middle Row (RM)
#define RM0 18
#define RM1 19
#define RM2 20
#define RM3 21
#define RM4 22
#define RM5 23

// Bottom Row (RB)
#define RB0 30
#define RB1 31
#define RB2 32
#define RB3 33
#define RB4 34
#define RB5 35

// Thumb Cluster (RH)
#define RH0 39
#define RH1 40
#define RH2 41
