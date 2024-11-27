// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>

// int main(){
//     int num;
//     int StudentID;

//     char score1;
//     int test1_ab = 0;

//     char score2;
//     int test2_ab = 0;
    
//     char score3;
//     int test3_ab = 0;
    
//     int s1_total = 0;
//     float s1_average;
//     int s2_total = 0;
//     float s2_average;
//     int s3_total = 0;
//     float s3_average;

//     while (scanf("%d\n", &num) != EOF)
//     {   

//         scanf("%d\n", &StudentID);
//         scanf("%s\n%s\n%s\n", &score1, &score2, &score3);

//         //缺席
//         if (score1 == "缺考"){
//             test1_ab++;
//         }
//         if (score2 == "缺考"){
//             test2_ab++;
//         }
//         if (score3 == "缺考"){
//             test3_ab++;
//         }
//         s1_total += (int)score1;
//         s2_total += (int)score2;
//         s3_total += (int)score3;

//         s1_average = (float)s1_total / (num-test1_ab);
//         s2_average = (float)s2_total / (num-test2_ab);
//         s3_average = (float)s3_total / (num-test3_ab);
//     }
//     s1_average = (float)s1_total / (num-test1_ab);
//     s2_average = (float)s2_total / (num-test2_ab);
//     s3_average = (float)s3_total / (num-test3_ab);

//     printf("%f\n", s1_average);
//     printf("%f\n", s2_average);
//     printf("%f\n", s3_average);
// }



        //缺席
        // if (score1 == -1){
        //     test1_ab++;
        // }
        // if (score2 == -1){
        //     test2_ab++;
        // }
        // if (score3 == -1){
        //     test3_ab++;
        // }


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

#define MAX_STUDENTS 1000 // 假設最多有 1000 位學生

typedef struct {
    int studentID;
    int total_score;
} StudentTotal;

// 比較函數，用於排序學生總分
int compare_totals(const void * a, const void * b) {
    return ((StudentTotal*)b)->total_score - ((StudentTotal*)a)->total_score; // 從高到低排序
}

int compare(const void * a, const void * b) {
    return (*(int*)a - *(int*)b); // 用來排序成績
}

int main(){
    int num;
    int StudentID;
    
    // 修改這裡設置學號
    int target_student_id = 1357122; // 要搜尋的學號

    char score1[10];
    int test1_ab = 0;
    int scores1[MAX_STUDENTS]; // 儲存第一場考試的有效成績
    int valid_scores1 = 0;

    char score2[10];
    int test2_ab = 0;
    int scores2[MAX_STUDENTS];
    int valid_scores2 = 0;
    
    char score3[10];
    int test3_ab = 0;
    int scores3[MAX_STUDENTS];
    int valid_scores3 = 0;
    
    int s1_total = 0;
    float s1_average;
    int s2_total = 0;
    float s2_average;
    int s3_total = 0;
    float s3_average;

    // 用來儲存學生的總分
    StudentTotal student_totals[MAX_STUDENTS];
    int total_student_count = 0;

    // 用來儲存目標學號的成績
    int target_student_score1 = -1;
    int target_student_score2 = -1;
    int target_student_score3 = -1;

    while (scanf("%d\n", &num) != EOF)
    {   
        scanf("%d\n", &StudentID);
        scanf("%s\n%s\n%s\n", score1, score2, score3);

        int s1 = 0, s2 = 0, s3 = 0; // 每場考試成績初始化為0

        if (strcmp(score1, "缺考") == 0){
            test1_ab++;
        } else {
            s1 = atoi(score1);
            s1_total += s1;
            scores1[valid_scores1++] = s1;

            // 記錄目標學號的成績
            if (StudentID == target_student_id) {
                target_student_score1 = s1;
            }
        }

        if (strcmp(score2, "缺考") == 0){
            test2_ab++;
        } else {
            s2 = atoi(score2);
            s2_total += s2;
            scores2[valid_scores2++] = s2;

            if (StudentID == target_student_id) {
                target_student_score2 = s2;
            }
        }

        if (strcmp(score3, "缺考") == 0){
            test3_ab++;
        } else {
            s3 = atoi(score3);
            s3_total += s3;
            scores3[valid_scores3++] = s3;

            if (StudentID == target_student_id) {
                target_student_score3 = s3;
            }
        }

        // 計算學生的三科總分，並記錄到 student_totals 中
        student_totals[total_student_count].studentID = StudentID;
        student_totals[total_student_count].total_score = s1 + s2 + s3;
        total_student_count++;
    }

    // 計算平均
    s1_average = (float)s1_total / valid_scores1;
    s2_average = (float)s2_total / valid_scores2;
    s3_average = (float)s3_total / valid_scores3;

    // 計算標準差
    float s1_variance = 0.0, s2_variance = 0.0, s3_variance = 0.0;
    for (int i = 0; i < valid_scores1; i++) {
        s1_variance += pow(scores1[i] - s1_average, 2);
    }
    for (int i = 0; i < valid_scores2; i++) {
        s2_variance += pow(scores2[i] - s2_average, 2);
    }
    for (int i = 0; i < valid_scores3; i++) {
        s3_variance += pow(scores3[i] - s3_average, 2);
    }

    float s1_stddev = sqrt(s1_variance / valid_scores1);
    float s2_stddev = sqrt(s2_variance / valid_scores2);
    float s3_stddev = sqrt(s3_variance / valid_scores3);

    // 對成績排序以便找出頂標、前標、均標、後標
    qsort(scores1, valid_scores1, sizeof(int), compare);
    qsort(scores2, valid_scores2, sizeof(int), compare);
    qsort(scores3, valid_scores3, sizeof(int), compare);

    // 計算分位數 (頂標, 前標, 均標, 後標)
    int s1_top = scores1[(int)(valid_scores1 * 0.75)];
    int s1_upper = scores1[(int)(valid_scores1 * 0.5)];
    int s1_middle = scores1[(int)(valid_scores1 * 0.25)];
    int s1_lower = scores1[(int)(valid_scores1 * 0.1)];

    int s2_top = scores2[(int)(valid_scores2 * 0.75)];
    int s2_upper = scores2[(int)(valid_scores2 * 0.5)];
    int s2_middle = scores2[(int)(valid_scores2 * 0.25)];
    int s2_lower = scores2[(int)(valid_scores2 * 0.1)];

    int s3_top = scores3[(int)(valid_scores3 * 0.75)];
    int s3_upper = scores3[(int)(valid_scores3 * 0.5)];
    int s3_middle = scores3[(int)(valid_scores3 * 0.25)];
    int s3_lower = scores3[(int)(valid_scores3 * 0.1)];

    // 計算目標學號的百分比 (贏過多少人)
    int student1_percentile = 0, student2_percentile = 0, student3_percentile = 0;
    if (target_student_score1 != -1) {
        for (int i = 0; i < valid_scores1; i++) {
            if (scores1[i] <= target_student_score1) {
                student1_percentile++;
            }
        }
        student1_percentile = (student1_percentile * 100) / valid_scores1;
    }

    if (target_student_score2 != -1) {
        for (int i = 0; i < valid_scores2; i++) {
            if (scores2[i] <= target_student_score2) {
                student2_percentile++;
            }
        }
        student2_percentile = (student2_percentile * 100) / valid_scores2;
    }

    if (target_student_score3 != -1) {
        for (int i = 0; i < valid_scores3; i++) {
            if (scores3[i] <= target_student_score3) {
                student3_percentile++;
            }
        }
        student3_percentile = (student3_percentile * 100) / valid_scores3;
    }

    // 對學生的總分進行排序，計算排名
    qsort(student_totals, total_student_count, sizeof(StudentTotal), compare_totals);

    // 找出目標學號的排名
    int target_student_total_score = target_student_score1 + target_student_score2 + target_student_score3;
    int target_student_rank = 1; // 排名從1開始
    for (int i = 0; i < total_student_count; i++) {
        if (student_totals[i].total_score == target_student_total_score && student_totals[i].studentID == target_student_id) {
            target_student_rank = i + 1; // 找到目標學號的排名
            break;
        }
    }

    // 輸出平均值、標準差
    printf("考試 1 平均: %.2f, 標準差: %.2f\n", s1_average, s1_stddev);
    printf("考試 2 平均: %.2f, 標準差: %.2f\n", s2_average, s2_stddev);
    printf("考試 3 平均: %.2f, 標準差: %.2f\n", s3_average, s3_stddev);

    // 輸出頂標、前標、均標、後標
    printf("考試 1: 頂標: %d, 前標: %d, 均標: %d, 後標: %d\n", s1_top, s1_upper, s1_middle, s1_lower);
    printf("考試 2: 頂標: %d, 前標: %d, 均標: %d, 後標: %d\n", s2_top, s2_upper, s2_middle, s2_lower);
    printf("考試 3: 頂標: %d, 前標: %d, 均標: %d, 後標: %d\n", s3_top, s3_upper, s3_middle, s3_lower);

    // 輸出目標學號的考試成績百分位
    printf("學生 %d 在考試 1 中贏過: %d%% 的人\n", target_student_id, student1_percentile);
    printf("學生 %d 在考試 2 中贏過: %d%% 的人\n", target_student_id, student2_percentile);
    printf("學生 %d 在考試 3 中贏過: %d%% 的人\n", target_student_id, student3_percentile);

    // 輸出目標學號的總分排名
    printf("學生 %d 三科總分為: %d，排名為: 第 %d 名\n", target_student_id, target_student_total_score, target_student_rank);

    return 0;
}

// 1
// 957056
// 51
// 63
// 41
// 2
// 957155
// 缺考
// 缺考
// 缺考
// 3
// 957158
// 92
// 51
// 82
// 4
// 957162
// 67
// 46
// 55
// 5
// 1057061
// 31
// 20
// 38
// 6
// 1057134
// 45
// 缺考
// 缺考
// 7
// 1057155
// 40
// 69
// 86
// 8
// 1057156
// 56
// 33
// 82
// 9
// 1157016
// 67
// 57
// 71
// 10
// 1157043
// 73
// 41
// 84
// 11
// 1157049
// 76
// 43
// 91
// 12
// 1157054
// 78
// 71
// 61
// 13
// 1157060
// 73
// 79
// 69
// 14
// 1157063
// 68
// 88
// 68
// 15
// 1157105
// 53
// 10
// 46
// 16
// 1157154
// 77
// 64
// 85
// 17
// 1157155
// 55
// 81
// 62
// 18
// 1157157
// 44
// 50
// 66
// 19
// 1157158
// 75
// 86
// 79
// 20
// 1157164
// 18
// 46
// 42
// 21
// 0116137
// 83
// 90
// 83
// 22
// 1357101
// 81
// 64
// 63
// 23
// 1357102
// 79
// 44
// 69
// 24
// 1357103
// 32
// 9
// 39
// 25
// 1357104
// 52
// 2
// 缺考
// 26
// 1357105
// 73
// 47
// 38
// 27
// 1357106
// 69
// 26
// 77
// 28
// 1357107
// 68
// 70
// 39
// 29
// 1357108
// 80
// 51
// 57
// 30
// 1357109
// 68
// 51
// 24
// 31
// 1357110
// 58
// 24
// 47
// 32
// 1357111
// 55
// 56
// 66
// 33
// 1357112
// 97
// 100
// 75
// 34
// 1357113
// 44
// 37
// 52
// 35
// 1357114
// 80
// 42
// 39
// 36
// 1357115
// 97
// 75
// 79
// 37
// 1357116
// 79
// 86
// 82
// 38
// 1357117
// 84
// 72
// 64
// 39
// 1357118
// 69
// 39
// 49
// 40
// 1357119
// 73
// 86
// 82
// 41
// 1357120
// 93
// 87
// 67
// 42
// 1357121
// 42
// 6
// 15
// 43
// 1357122
// 78
// 89
// 85
// 44
// 1357123
// 20
// 24
// 28
// 45
// 1357124
// 48
// 16
// 57
// 46
// 1357125
// 74
// 52
// 81
// 47
// 1357126
// 68
// 48
// 46
// 48
// 1357127
// 47
// 24
// 39
// 49
// 1357128
// 28
// 8
// 77
// 50
// 1357129
// 86
// 61
// 35
// 51
// 1357130
// 68
// 72
// 67
// 52
// 1357131
// 60
// 44
// 30
// 53
// 1357132
// 94
// 62
// 75
// 54
// 1357133
// 90
// 57
// 69
// 55
// 1357134
// 55
// 64
// 53
// 56
// 1357135
// 27
// 58
// 29
// 57
// 1357136
// 73
// 56
// 72
// 58
// 1357137
// 74
// 93
// 71
// 59
// 1357138
// 27
// 19
// 44
// 60
// 1357139
// 78
// 51
// 47
// 61
// 1357140
// 88
// 90
// 94
// 62
// 1357141
// 73
// 44
// 73
// 63
// 1357142
// 100
// 98
// 90
// 65
// 1357144
// 87
// 83
// 85
// 66
// 1357145
// 50
// 4
// 16
// 67
// 1357147
// 44
// 67
// 44
// 68
// 1357148
// 49
// 27
// 27
// 69
// 1357149
// 65
// 52
// 44
// 70
// 1357150
// 92
// 65
// 88
// 72
// 1357152
// 93
// 77
// 88
// 74
// 1357154
// 83
// 34
// 78
// 75
// 1357155
// 54
// 65
// 80
// 76
// 1357156
// 15
// 38
// 60
// 77
// 1357157
// 72
// 89
// 83
// 78
// 1357158
// 68
// 39
// 34
// 79
// 1357159
// 70
// 24
// 66

