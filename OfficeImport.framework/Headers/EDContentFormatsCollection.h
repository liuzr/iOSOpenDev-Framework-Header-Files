/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDKeyedCollection.h>
#import <OfficeImport/EDContentFormatsCollection.h>


__attribute__((visibility("hidden")))
@interface EDContentFormatsCollection : EDKeyedCollection {
@private
	unsigned mNextContentFormatId;	// 12 = 0xc
}
- (id)init;	// 0xd7fa1
- (unsigned)addObject:(id)object;	// 0xd8755
- (unsigned)addOrEquivalentObject:(id)object;	// 0xdd395
@end

@interface EDContentFormatsCollection (Private)
- (void)setupDefaults;	// 0xd805d
- (void)addDefaultWithNSString:(id)nsstring formatId:(unsigned)anId;	// 0xd849d
- (bool)isOverwritingKeyOK;	// 0x24da19
@end
