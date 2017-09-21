//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPDownload.h>

@class NSError, NSMutableData, NSString;

@interface IMAPSimpleDownload : IMAPDownload
{
    NSMutableData *_mdata;	// 32 = 0x20
    BOOL _knownLength;	// 40 = 0x28
    unsigned int _bytesFetched;	// 44 = 0x2c
    BOOL _isComplete;	// 48 = 0x30
    unsigned int _expectedLength;	// 52 = 0x34
    NSError *_error;	// 56 = 0x38
    NSString *_partSectionSpecifier;	// 64 = 0x40
    long long _textSectionSpecifier;	// 72 = 0x48
}

@property long long textSectionSpecifier; // @synthesize textSectionSpecifier=_textSectionSpecifier;
@property(retain) NSString *partSectionSpecifier; // @synthesize partSectionSpecifier=_partSectionSpecifier;
@property(nonatomic) BOOL isComplete; // @synthesize isComplete=_isComplete;
@property(readonly, nonatomic) unsigned int expectedLength; // @synthesize expectedLength=_expectedLength;
- (void)setError:(id)arg1;	// IMP=0x000000000002498d
- (id)error;	// IMP=0x0000000000024977
- (void).cxx_destruct;	// IMP=0x0000000000024a18
- (id)data;	// IMP=0x0000000000024908
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;	// IMP=0x00000000000245de
- (void)processResults;	// IMP=0x0000000000023c3b
- (BOOL)handleFetchResult:(id)arg1;	// IMP=0x0000000000023a94
- (unsigned int)bytesFetched;	// IMP=0x0000000000023a84
- (id)description;	// IMP=0x000000000002393f
- (id)createCopy;	// IMP=0x0000000000023875
- (id)initWithUid:(unsigned int)arg1;	// IMP=0x00000000000237a6
- (id)initWithUid:(unsigned int)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 length:(unsigned int)arg4;	// IMP=0x00000000000236fb
- (id)initWithUid:(unsigned int)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 estimatedLength:(unsigned int)arg4;	// IMP=0x0000000000023650

@end
