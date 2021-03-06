// Copyright 2015-present 650 Industries. All rights reserved.

#import <UIKit/UIKit.h>

#import "EXCachedResource.h"
#import "EXBundleImageLoader.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Used to create instances of EXCachedResource in versioned code.
 */
@interface EXCachedResourceManager : NSObject <EXCachedResourceManagerScopedModuleDelegate>

- (EXCachedResource *)createCachedResourceWithName:(NSString *)resourceName
                                      resourceType:(NSString *)resourceType
                                         remoteUrl:(NSURL *)url
                                         cachePath:(NSString * _Nullable)cachePath;

@end

NS_ASSUME_NONNULL_END
