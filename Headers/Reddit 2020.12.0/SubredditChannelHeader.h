//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SubredditChannelHeader : NSObject
{
    _Bool _isSubredditNSFW;
    NSString *_name;
    NSString *_iconImageURL;
    NSString *_iconImageBackgroundColor;
}

@property(nonatomic) _Bool isSubredditNSFW; // @synthesize isSubredditNSFW=_isSubredditNSFW;
@property(retain, nonatomic) NSString *iconImageBackgroundColor; // @synthesize iconImageBackgroundColor=_iconImageBackgroundColor;
@property(retain, nonatomic) NSString *iconImageURL; // @synthesize iconImageURL=_iconImageURL;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)configureWithSubName:(id)arg1 imageURL:(id)arg2 imageBackgroundColor:(id)arg3 isSubredditNSFW:(_Bool)arg4;

@end

