//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@class NSNumber;

@interface WamEventQrCodeScan : WamEvent
{
    NSNumber *_qr_code_camera_source_number;
    NSNumber *_qr_code_error_reason_number;
    NSNumber *_qr_code_type_number;
    double _scanned_code_successfully;
}

@property(nonatomic) double scanned_code_successfully; // @synthesize scanned_code_successfully=_scanned_code_successfully;
- (void).cxx_destruct;
@property(nonatomic) long long qr_code_type;
- (_Bool)is_qr_code_type_set;
@property(nonatomic) long long qr_code_error_reason;
- (_Bool)is_qr_code_error_reason_set;
@property(nonatomic) long long qr_code_camera_source;
- (_Bool)is_qr_code_camera_source_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

