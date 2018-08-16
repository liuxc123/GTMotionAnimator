/*
 Copyright 2017-present The Material Motion Authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <Foundation/Foundation.h>
#import <GTMotionInterchange/GTMotionInterchange.h>

@protocol CalendarChipTiming <NSObject>

@property(nonatomic, strong, nonnull, readonly) GTMAnimationTraits *chipWidth;
@property(nonatomic, strong, nonnull, readonly) GTMAnimationTraits *chipHeight;
@property(nonatomic, strong, nonnull, readonly) GTMAnimationTraits *chipY;

@property(nonatomic, strong, nonnull, readonly) GTMAnimationTraits *chipContentOpacity;
@property(nonatomic, strong, nonnull, readonly) GTMAnimationTraits *headerContentOpacity;

@end

@interface CalendarChipMotionSpec: NSObject

@property(nonatomic, class, strong, nonnull, readonly) id<CalendarChipTiming> expansion;
@property(nonatomic, class, strong, nonnull, readonly) id<CalendarChipTiming> collapse;

// This object is not meant to be instantiated.
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

