#import <UIKit/UIKit.h>

#import "XMPPFramework.h"
#import "XMPP.h"
#import "XMPPConstants.h"
#import "XMPPElement.h"
#import "XMPPInternal.h"
#import "XMPPIQ.h"
#import "XMPPJID.h"
#import "XMPPLogging.h"
#import "XMPPMessage.h"
#import "XMPPModule.h"
#import "XMPPParser.h"
#import "XMPPPresence.h"
#import "XMPPStream.h"
#import "idn-int.h"
#import "stringprep.h"
#import "XMPPAnonymousAuthentication.h"
#import "XMPPDeprecatedDigestAuthentication.h"
#import "XMPPDeprecatedPlainAuthentication.h"
#import "XMPPDigestMD5Authentication.h"
#import "XMPPPlainAuthentication.h"
#import "XMPPSCRAMSHA1Authentication.h"
#import "XMPPXFacebookPlatformAuthentication.h"
#import "XMPPXOAuth2Google.h"
#import "XMPPCustomBinding.h"
#import "XMPPSASLAuthentication.h"
#import "NSData+XMPP.h"
#import "NSNumber+XMPP.h"
#import "NSXMLElement+XMPP.h"
#import "DDList.h"
#import "GCDMulticastDelegate.h"
#import "RFImageToDataTransformer.h"
#import "XMPPIDTracker.h"
#import "XMPPSRVResolver.h"
#import "XMPPStringPrep.h"
#import "XMPPTimer.h"
#import "NSString+DDXML.h"
#import "DDXML.h"
#import "DDXMLDocument.h"
#import "DDXMLElement.h"
#import "DDXMLNode.h"
#import "DDXMLPrivate.h"
#import "XMPPCoreDataStorage.h"
#import "XMPPCoreDataStorageProtected.h"
#import "XMPPReconnect.h"
#import "XMPPGroupCoreDataStorageObject.h"
#import "XMPPResourceCoreDataStorageObject.h"
#import "XMPPRosterCoreDataStorage.h"
#import "XMPPUserCoreDataStorageObject.h"
#import "XMPPResourceMemoryStorageObject.h"
#import "XMPPRosterMemoryStorage.h"
#import "XMPPRosterMemoryStoragePrivate.h"
#import "XMPPUserMemoryStorageObject.h"
#import "XMPPResource.h"
#import "XMPPRoster.h"
#import "XMPPRosterPrivate.h"
#import "XMPPUser.h"
#import "XMPPIQ+XEP_0060.h"
#import "XMPPPubSub.h"
#import "NSDate+XMPPDateTimeProfiles.h"
#import "XMPPDateTimeProfiles.h"
#import "NSString+XEP_0106.h"
#import "NSXMLElement+XEP_0203.h"

FOUNDATION_EXPORT double Magnet_XMPPFrameworkVersionNumber;
FOUNDATION_EXPORT const unsigned char Magnet_XMPPFrameworkVersionString[];

