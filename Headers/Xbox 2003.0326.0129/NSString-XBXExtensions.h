//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (XBXExtensions)
+ (_Bool)xbxIsString:(id)arg1 equalToString:(id)arg2 options:(unsigned long long)arg3;
+ (_Bool)xbxIsString:(id)arg1 equalToString:(id)arg2;
+ (_Bool)isNullOrEmpty:(id)arg1;
+ (id)xbxStripHtml:(id)arg1;
+ (id)xbxXmlDecode:(id)arg1;
- (id)xbxDateValue;
- (_Bool)xbxIsEqualToString:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)xbxIsEqualToStringIgnoreCase:(id)arg1;
- (id)xbxSubstringWithComposedCharactersLength:(long long)arg1;
- (unsigned int)xbxUnsignedIntValue;
- (id)xbxSafeUrlDecode;
- (id)xbxSafeUrlEncode;
- (id)xbxStringByAppendingWidth:(long long)arg1 height:(long long)arg2;
- (id)xbxXmlEncode;
- (id)xbxUrlDecode;
- (id)xbxUrlEncode;
@end

