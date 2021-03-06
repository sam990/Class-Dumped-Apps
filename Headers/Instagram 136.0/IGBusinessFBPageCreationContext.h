//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGFacebookPageInfo, NSString;

@interface IGBusinessFBPageCreationContext : NSObject <NSCopying>
{
    _Bool _hasSuggestedCategory;
    NSString *_pageName;
    NSString *_userName;
    NSString *_superCategoryID;
    NSString *_subCategoryID;
    IGFacebookPageInfo *_createdPage;
    long long _step;
}

@property(nonatomic) long long step; // @synthesize step=_step;
@property(nonatomic) _Bool hasSuggestedCategory; // @synthesize hasSuggestedCategory=_hasSuggestedCategory;
@property(retain, nonatomic) IGFacebookPageInfo *createdPage; // @synthesize createdPage=_createdPage;
@property(retain, nonatomic) NSString *subCategoryID; // @synthesize subCategoryID=_subCategoryID;
@property(retain, nonatomic) NSString *superCategoryID; // @synthesize superCategoryID=_superCategoryID;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (void).cxx_destruct;
- (_Bool)canGoToNextScreen;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

