//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponderEvent.h>

@protocol YTEditFeatureUI;

@interface YTPresentEditFeatureResponderEvent : YTResponderEvent
{
    _Bool _presenting;
    id <YTEditFeatureUI> _feature;
}

+ (id)eventWithFirstResponder:(id)arg1 presenting:(_Bool)arg2 feature:(id)arg3;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(readonly, nonatomic) id <YTEditFeatureUI> feature; // @synthesize feature=_feature;
- (void).cxx_destruct;
- (id)initWithFirstResponder:(id)arg1 presenting:(_Bool)arg2 feature:(id)arg3;

@end
