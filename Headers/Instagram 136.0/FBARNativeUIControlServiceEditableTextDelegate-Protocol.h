//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSString;
@protocol FBARNativeUIControlServiceEffectDescriptor;

@protocol FBARNativeUIControlServiceEditableTextDelegate <NSObject>
- (void)nativeUIControlServiceForEffectDescriptor:(id <FBARNativeUIControlServiceEffectDescriptor>)arg1 enterTextEditModeWithCurrentText:(NSString *)arg2 isFirstEdit:(_Bool)arg3 exitCallback:(void (^)(NSString *))arg4;
@end

