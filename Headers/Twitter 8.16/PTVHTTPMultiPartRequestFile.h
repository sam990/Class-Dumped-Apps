//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface PTVHTTPMultiPartRequestFile : NSObject
{
    NSString *_key;
    NSString *_filename;
    NSString *_contentType;
    NSData *_data;
}

+ (id)MultipartRequestFileWith:(id)arg1 Filename:(id)arg2 ContentType:(id)arg3 Data:(id)arg4;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

