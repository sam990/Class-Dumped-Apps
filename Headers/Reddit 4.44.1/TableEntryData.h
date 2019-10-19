//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface TableEntryData : NSObject
{
    NSString *_labelText;
    UIImage *_image;
    SEL _action;
}

+ (id)tableEntry:(id)arg1 imageName:(id)arg2 action:(SEL)arg3;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (void).cxx_destruct;

@end
