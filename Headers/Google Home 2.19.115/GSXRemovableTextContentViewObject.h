//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSXTextContentViewObject.h"

@protocol GSXRemovableTextContentViewObjectDelegate;

@interface GSXRemovableTextContentViewObject : GSXTextContentViewObject
{
    _Bool _removing;
    id <GSXRemovableTextContentViewObjectDelegate> _delegate;
    SEL _closeImageSelector;
}

@property(nonatomic) SEL closeImageSelector; // @synthesize closeImageSelector=_closeImageSelector;
@property(nonatomic, getter=isRemoving) _Bool removing; // @synthesize removing=_removing;
@property(nonatomic) __weak id <GSXRemovableTextContentViewObjectDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 contentID:(id)arg4;

@end

