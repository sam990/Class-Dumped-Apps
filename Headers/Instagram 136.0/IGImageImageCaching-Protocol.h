//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSString, NSURL, UIImage;

@protocol IGImageImageCaching <NSObject>
- (void)removeAllImages;
- (_Bool)containsImageForKey:(NSString *)arg1;
- (UIImage *)imageForKey:(NSString *)arg1;
- (void)setImage:(UIImage *)arg1 withURL:(NSURL *)arg2 forKey:(NSString *)arg3 forModule:(NSString *)arg4 forFetchType:(long long)arg5;
@end

