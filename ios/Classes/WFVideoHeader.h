//
//  WFVideoHeader.h
//  Pods
//
//  Created by windyfat on 2020/5/7.
//

#ifndef WFVideoHeader_h
#define WFVideoHeader_h

typedef NS_ENUM(NSUInteger, WFPTZControlDirection) {
    WFPTZControlDirectionUp,                // 上
    WFPTZControlDirectionDown,              // 下
    WFPTZControlDirectionLeft,              // 左
    WFPTZControlDirectionRight,             // 右
    WFPTZControlDirectionCenter,            // 中
};

typedef NS_ENUM(NSUInteger, WFHikVideoStatus) {
    IDLE,                       // 闲置状态
    LOADING,                    // 加载中状态
    SUCCESS,                    // 播放成功
    STOPPING,                   // 暂时停止播放
    FAILED,                     // 播放失败
    EXCEPTION,                  // 播放过程中出现异常
    FINISH,                     // 回放结束
};

#endif /* WFVideoHeader_h */
