//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSMutableString, NSString;
@protocol DTHTMLParserDelegate;

@interface DTHTMLParser : NSObject
{
    struct _xmlSAXHandler _handler;
    NSData *_data;
    unsigned long long _encoding;
    id <DTHTMLParserDelegate> _delegate;
    struct _xmlParserCtxt *_parserContext;
    NSMutableString *_accumulateBuffer;
    _Bool _isAborting;
    NSError *_parserError;
}

@property(nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property(retain, nonatomic) NSError *parserError; // @synthesize parserError=_parserError;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *publicID;
@property(readonly, nonatomic) NSString *systemID;
@property(readonly, nonatomic) long long columnNumber;
@property(readonly, nonatomic) long long lineNumber;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)abortParsing;
- (_Bool)parse;
- (void)_accumulateCharacters:(const char *)arg1 length:(int)arg2;
- (void)_resetAccumulateBufferAndReportCharacters;
- (void)dealloc;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;

@end
