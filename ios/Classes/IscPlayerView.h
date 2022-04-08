//
//  IscPlayerView.h
//  iscflutterplugin
//
//  Created by windyfat on 2020/5/7.
//

#import <UIKit/UIKit.h>
#import <Flutter/Flutter.h>

#import <HikVideoPlayer/HVPError.h>
#import <HikVideoPlayer/HVPPlayer.h>
#import <HikVideoPlayer/HikVideoPlayer.h>

NS_ASSUME_NONNULL_BEGIN

@interface IscPlayerView : UIView<FlutterPlatformView, FlutterStreamHandler, HVPPlayerDelegate>


-(instancetype)initWithWithFrame:(CGRect)frame
                  viewIdentifier:(int64_t)viewId
                       arguments:(id _Nullable)args
                 binaryMessenger:(NSObject<FlutterBinaryMessenger>*)messenger;

@end

NS_ASSUME_NONNULL_END
