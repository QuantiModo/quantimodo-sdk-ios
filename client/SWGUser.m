#import "SWGUser.h"

@implementation SWGUser
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"id": @"_id", @"wpId": @"wpId", @"displayName": @"displayName", @"loginName": @"loginName", @"email": @"email", @"token": @"token", @"administrator": @"administrator" }];
}

@end
