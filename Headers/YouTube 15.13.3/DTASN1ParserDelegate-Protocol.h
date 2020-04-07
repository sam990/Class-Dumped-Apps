//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class DTASN1BitString, DTASN1Parser, NSData, NSDate, NSError, NSNumber, NSString;

@protocol DTASN1ParserDelegate <NSObject>

@optional
- (void)parser:(DTASN1Parser *)arg1 foundNumber:(NSNumber *)arg2;
- (void)parser:(DTASN1Parser *)arg1 foundBitString:(DTASN1BitString *)arg2;
- (void)parser:(DTASN1Parser *)arg1 foundData:(NSData *)arg2;
- (void)parser:(DTASN1Parser *)arg1 foundString:(NSString *)arg2;
- (void)parser:(DTASN1Parser *)arg1 foundObjectIdentifier:(NSString *)arg2;
- (void)parser:(DTASN1Parser *)arg1 foundDate:(NSDate *)arg2;
- (void)parserFoundNull:(DTASN1Parser *)arg1;
- (void)parser:(DTASN1Parser *)arg1 parseErrorOccurred:(NSError *)arg2;
- (void)parser:(DTASN1Parser *)arg1 didEndContextWithTag:(unsigned long long)arg2;
- (void)parser:(DTASN1Parser *)arg1 didStartContextWithTag:(unsigned long long)arg2;
- (void)parser:(DTASN1Parser *)arg1 didEndContainerWithType:(unsigned long long)arg2;
- (void)parser:(DTASN1Parser *)arg1 didStartContainerWithType:(unsigned long long)arg2;
- (void)parserDidEndDocument:(DTASN1Parser *)arg1;
- (void)parserDidStartDocument:(DTASN1Parser *)arg1;
@end
