//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol YTYouThereControllerDelegate <NSObject>
- (void)exitFullScreenIfRequiredWithCompletion:(void (^)(void))arg1;
- (_Bool)isMDXActive;
- (NSString *)currentCSN;
- (void)youThereControllerDidTransitionFromState:(long long)arg1 toState:(long long)arg2;
@end
