/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Notes/NoteAccountObject.h>
#import <Notes/NoteCollectionObject.h>

@class NSString, NSNumber, NSSet, NoteStoreObject, NSDictionary;

@interface NoteAccountObject : NoteCollectionObject {
	NSDictionary *_constraints;	// 48 = 0x30
}
@property(retain, nonatomic) NSDictionary *constraints;	// G=0xd71d; S=0xd99d; @synthesize=_constraints
@property(retain, nonatomic) NSString *pathToConstraintsPlist;	// G=0xd70d; S=0xd6c9; 
@property(assign, nonatomic) int accountType;	// G=0xd68d; S=0xd645; 
@property(retain, nonatomic) NSString *name;	// @dynamic
@property(retain, nonatomic) NoteStoreObject *defaultStore;	// @dynamic
@property(retain, nonatomic) NSSet *stores;	// @dynamic
@property(retain, nonatomic) NSString *accountIdentifier;	// @dynamic
// declared property setter: - (void)setConstraints:(id)constraints;	// 0xd99d
/* iOSOpenDev: commented-out (since bad name)
- (void).cxx_destruct;	// 0xd9c1
*/
- (void)didTurnIntoFault;	// 0xd959
- (BOOL)validateDefaultStore:(id *)store error:(id *)error;	// 0xd87d
- (BOOL)shouldMarkNotesAsDeleted;	// 0xd7e9
// declared property getter: - (id)constraints;	// 0xd71d
// declared property getter: - (id)pathToConstraintsPlist;	// 0xd70d
// declared property setter: - (void)setPathToConstraintsPlist:(id)constraintsPlist;	// 0xd6c9
// declared property getter: - (int)accountType;	// 0xd68d
// declared property setter: - (void)setAccountType:(int)type;	// 0xd645
- (id)storeForExternalId:(id)externalId;	// 0xd3ed
- (id)basicAccountIdentifier;	// 0xd3dd
- (id)collectionInfo;	// 0xd341
- (id)predicateForNotes;	// 0xd2e1
@end

@interface NoteAccountObject (Private)
@property(retain, nonatomic) NSString *constraintsPath;	// @dynamic
@property(retain, nonatomic) NSNumber *type;	// @dynamic
@end
