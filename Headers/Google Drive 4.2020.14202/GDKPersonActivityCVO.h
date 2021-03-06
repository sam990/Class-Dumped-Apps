//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentViewObject.h>

@class GDKPersonActivity, UIImage;
@protocol GDKPersonActivityCVODelegate;

@interface GDKPersonActivityCVO : GOOBaseContentViewObject
{
    GDKPersonActivity *_activity;
    CDUnknownBlockType _fileSelectedHandler;
    UIImage *_avatarImage;
    id <GDKPersonActivityCVODelegate> _delegate;
}

@property(nonatomic) __weak id <GDKPersonActivityCVODelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(copy, nonatomic) CDUnknownBlockType fileSelectedHandler; // @synthesize fileSelectedHandler=_fileSelectedHandler;
@property(retain, nonatomic) GDKPersonActivity *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (Class)contentViewClass;

@end

