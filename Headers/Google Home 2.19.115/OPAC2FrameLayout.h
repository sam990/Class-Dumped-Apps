//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPAC2ViewGroup.h"

@class NSMutableArray;

@interface OPAC2FrameLayout : OPAC2ViewGroup
{
    NSMutableArray *_matchParentChildren;
}

+ (Class)layoutParamsClass;
@property(retain, nonatomic) NSMutableArray *matchParentChildren; // @synthesize matchParentChildren=_matchParentChildren;
- (void).cxx_destruct;
- (struct CGSize)measureIntrinsicSize:(struct OPAC2MeasureSpec)arg1;
- (void)layout:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

