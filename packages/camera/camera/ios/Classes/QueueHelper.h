// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QueueHelper : NSObject
+ (void)ensureToRunOnMainQueue:(void (^)(void))block;
@end

NS_ASSUME_NONNULL_END
