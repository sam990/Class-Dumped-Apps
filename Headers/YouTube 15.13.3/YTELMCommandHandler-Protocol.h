//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GIMMe, NSData, UIGestureRecognizer;
@protocol ELMContext, ELMController;

@protocol YTELMCommandHandler <NSObject>
- (void)executeWithContext:(id <ELMContext>)arg1 sender:(id <ELMController>)arg2 senderState:(NSData *)arg3 recognizer:(UIGestureRecognizer *)arg4 gimme:(GIMMe *)arg5 handler:(void (^)(id, NSError *))arg6;
@end
