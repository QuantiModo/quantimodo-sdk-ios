#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGUserTokenRequestInnerUserField.h"


@protocol SWGUserTokenRequest
@end
  
@interface SWGUserTokenRequest : SWGObject


@property(nonatomic) SWGUserTokenRequestInnerUserField<Optional, SWGUserTokenRequestInnerUserField>* user;
/* Organization Access token 
 */
@property(nonatomic) NSString* organization_access_token;

@end
