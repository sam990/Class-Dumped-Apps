//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@interface BaseBarButtonItem : UIBarButtonItem
{
    id _context;
}

+ (id)shareButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)deleteButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)overflowButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)backButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)closeButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)barButtonItemWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;

@end

