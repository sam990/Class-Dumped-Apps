//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface YTPlaylist : NSObject <NSCopying>
{
    _Bool _isPrivate;
    unsigned int _size;
    NSString *_title;
    NSString *_summary;
    NSString *_ID;
    NSString *_authorDisplayName;
    NSDate *_updated;
    NSDictionary *_thumbnailURLs;
    NSURL *_contentURL;
    NSURL *_editURL;
    NSURL *_postURL;
}

@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) unsigned int size; // @synthesize size=_size;
@property(readonly, nonatomic) NSURL *postURL; // @synthesize postURL=_postURL;
@property(readonly, nonatomic) NSURL *editURL; // @synthesize editURL=_editURL;
@property(readonly, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, nonatomic) NSDictionary *thumbnailURLs; // @synthesize thumbnailURLs=_thumbnailURLs;
@property(readonly, nonatomic) NSDate *updated; // @synthesize updated=_updated;
@property(readonly, nonatomic) NSString *authorDisplayName; // @synthesize authorDisplayName=_authorDisplayName;
@property(readonly, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(readonly, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEditable;
- (id)initWithID:(id)arg1 title:(id)arg2 summary:(id)arg3 authorDisplayName:(id)arg4 updated:(id)arg5 thumbnailURLs:(id)arg6 contentURL:(id)arg7 editURL:(id)arg8 postURL:(id)arg9 size:(unsigned int)arg10 isPrivate:(_Bool)arg11;

@end

