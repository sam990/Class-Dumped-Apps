//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPAC2ImageView.h"

#import "OPAC2ComponentTransformerClass-Protocol.h"

@class NSString;

@interface OPAC2RotatingArrowView : OPAC2ImageView <OPAC2ComponentTransformerClass>
{
    _Bool _rotated;
    NSString *_showMoreMessage;
    NSString *_showLessMessage;
}

+ (Class)targetMessageClass;
+ (id)targetExtension;
+ (id)targetTypeString;
@property(retain, nonatomic) NSString *showLessMessage; // @synthesize showLessMessage=_showLessMessage;
@property(retain, nonatomic) NSString *showMoreMessage; // @synthesize showMoreMessage=_showMoreMessage;
@property(nonatomic) _Bool rotated; // @synthesize rotated=_rotated;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1 andContext:(id)arg2 fromFactory:(id)arg3;

@end

