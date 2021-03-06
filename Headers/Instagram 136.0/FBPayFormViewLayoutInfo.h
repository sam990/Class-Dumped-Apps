//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <InstagramAppCoreFramework/NSCoding-Protocol.h>
#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBPayFormViewLayoutInfo : FBValueObject <NSCopying, NSCoding>
{
    NSString *_identifier;
    double _widthRatio;
    long long _col;
}

@property(readonly, nonatomic) long long col; // @synthesize col=_col;
@property(readonly, nonatomic) double widthRatio; // @synthesize widthRatio=_widthRatio;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 widthRatio:(double)arg2 col:(long long)arg3;

@end

