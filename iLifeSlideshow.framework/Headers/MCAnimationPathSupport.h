/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */


@class NSSet;

@protocol MCAnimationPathSupport
@property(readonly, assign) NSSet *animationPaths;
@property(readonly, assign) unsigned countOfAnimationPaths;
- (void)initAnimationPathsWithImprints:(id)imprints;
- (void)demolishAnimationPaths;
- (id)imprintsForAnimationPaths;
- (id)animationPathForKey:(id)key createIfNeeded:(BOOL)needed;
- (id)animationPathForKey:(id)key;
- (void)removeAnimationPathForKey:(id)key;
- (void)removeAllAnimationPaths;
// declared property getter: - (unsigned)countOfAnimationPaths;
// declared property getter: - (id)animationPaths;
@end

