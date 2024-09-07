#include "../include/task.h"

int task(int UpSpeed, int DownSpeed, int DesiredHeight) {
    int height = 0;
    int cnt = 0;
    if(DesiredHeight < 1) {
        return -1;
    }
    if(UpSpeed < DownSpeed) {
        if(UpSpeed < DesiredHeight) {
            return -1;
        }
        while(height + (UpSpeed - DownSpeed) > DesiredHeight) {
            cnt += 1;
            height += UpSpeed - DownSpeed;
        }
        return cnt + 1;
    } else {
        if(UpSpeed > DesiredHeight) {
            return 0;
        }
        while(height + UpSpeed < DesiredHeight) {
            cnt += 1;
            height += UpSpeed - DownSpeed;
        }
        return cnt + 1;
    }
}