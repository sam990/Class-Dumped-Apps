//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL, Post, Subreddit;

@interface TheatreMediaItem : NSObject
{
    _Bool _isGif;
    _Bool _isNSFW;
    _Bool _isSpoiler;
    _Bool _isImage;
    _Bool _isVideo;
    _Bool _isHlsVideo;
    NSString *_mediaId;
    Post *_originalPost;
    Subreddit *_subreddit;
    NSString *_title;
    NSString *_author;
    NSString *_shortDomain;
    NSDate *_createdAt;
    NSURL *_contentUrl;
    NSURL *_accessoryLinkURL;
    NSURL *_obfuscatedContentUrl;
    NSURL *_scrubberPreviewContentUrl;
    NSURL *_previewContentUrl;
    struct CGSize _aspectSize;
}

+ (id)theatreMediaItemFromObject:(id)arg1;
+ (id)theatreMediaItemsFromElements:(id)arg1;
+ (id)theatreMediaItemsFromElements:(id)arg1 withContainerPost:(id)arg2;
@property(nonatomic) _Bool isHlsVideo; // @synthesize isHlsVideo=_isHlsVideo;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) _Bool isImage; // @synthesize isImage=_isImage;
@property(nonatomic) _Bool isSpoiler; // @synthesize isSpoiler=_isSpoiler;
@property(nonatomic) _Bool isNSFW; // @synthesize isNSFW=_isNSFW;
@property(retain, nonatomic) NSURL *previewContentUrl; // @synthesize previewContentUrl=_previewContentUrl;
@property(retain, nonatomic) NSURL *scrubberPreviewContentUrl; // @synthesize scrubberPreviewContentUrl=_scrubberPreviewContentUrl;
@property(nonatomic) _Bool isGif; // @synthesize isGif=_isGif;
@property(nonatomic) struct CGSize aspectSize; // @synthesize aspectSize=_aspectSize;
@property(retain, nonatomic) NSURL *obfuscatedContentUrl; // @synthesize obfuscatedContentUrl=_obfuscatedContentUrl;
@property(retain, nonatomic) NSURL *accessoryLinkURL; // @synthesize accessoryLinkURL=_accessoryLinkURL;
@property(retain, nonatomic) NSURL *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *shortDomain; // @synthesize shortDomain=_shortDomain;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(retain, nonatomic) Post *originalPost; // @synthesize originalPost=_originalPost;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)shouldBlurWithOptions:(id)arg1;
@property(readonly, nonatomic) unsigned long long postType;
- (id)initWithSubredditImageWidget:(id)arg1;
- (id)initWithRichTextMedia:(id)arg1;
- (id)initWithPost:(id)arg1;

@end
