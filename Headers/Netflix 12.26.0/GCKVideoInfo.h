//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFCW444/NSCopying-Protocol.h>
#import <NFCW444/NSSecureCoding-Protocol.h>

@interface GCKVideoInfo : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _width;
    unsigned long long _height;
    long long _hdrType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long hdrType; // @synthesize hdrType=_hdrType;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 hdrType:(long long)arg3;

@end

