/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/SFUOutputStream.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface SFUMemoryOutputStream : XXUnknownSuperclass <SFUOutputStream> {
@private
	NSMutableData *mData;	// 4 = 0x4
}
- (id)initWithData:(id)data;	// 0x2e0fcd
- (void)dealloc;	// 0x2e10e9
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x2e100d
- (BOOL)canSeek;	// 0x2e0fb9
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x2e1039
- (long long)offset;	// 0x2e10c1
- (BOOL)canCreateInputStream;	// 0x2e0fbd
- (id)inputStream;	// 0x2e0fc1
- (void)close;	// 0x2e0fc5
- (id)closeLocalStream;	// 0x2e0fc9
@end
