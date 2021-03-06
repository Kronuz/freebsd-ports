# $FreeBSD$

PORTNAME=	flex-sdk
PORTVERSION=	3.5.0.12683
PORTREVISION=	1
CATEGORIES=	devel java
MASTER_SITES=	http://fpdownload.adobe.com/pub/flex/sdk/builds/flex3/
DISTFILES=	flex_sdk_${PORTVERSION}_mpl.zip
PKGNAMESUFFIX=	3

MAINTAINER= 	ports@FreeBSD.org
COMMENT=	Adobe Flex SDK

RUN_DEPENDS=	javavm:${PORTSDIR}/java/javavmwrapper

CONFLICTS=	ja-flex-sdk-2.* flex-sdk2-2.* flex-sdk-4.*
USES=		zip
USE_JAVA=	YES
JAVA_VERSION=	1.6+
WRKSRC=		${WRKDIR}
SUB_FILES=	${SCRIPTS:C/\$/.sh/g}
NO_BUILD=	YES
PLIST_SUB=	PORTNAME=${PORTNAME}
SUB_LIST=	PORTNAME=${PORTNAME}
SCRIPTS=	aasdoc acompc amxmlc asdoc compc copylocale digest \
		fcsh fdb mxmlc optimizer

OPTIONS_DEFINE=	DOCS

post-extract:
	${RM} ${WRKSRC}/bin/*.bat ${WRKSRC}/bin/*.exe

do-install:
.for i in ${SCRIPTS}
	${INSTALL_SCRIPT} ${WRKSRC}/${i}.sh ${STAGEDIR}${PREFIX}/bin/${i}
.endfor

	@${MKDIR} ${STAGEDIR}${JAVAJARDIR}/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/lib/*.jar ${STAGEDIR}${JAVAJARDIR}/${PORTNAME}/
	${INSTALL_DATA} ${WRKSRC}/ant/lib/*.jar ${STAGEDIR}${JAVAJARDIR}/${PORTNAME}/

	@${MKDIR} ${STAGEDIR}${DATADIR}/frameworks
	${CP} -r ${WRKSRC}/frameworks/ ${STAGEDIR}${DATADIR}/frameworks/

	@${MKDIR} ${STAGEDIR}${DATADIR}/asdoc/templates
	${CP} -r ${WRKSRC}/asdoc/templates/ ${STAGEDIR}${DATADIR}/asdoc/templates/

	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${CP} -r ${WRKSRC}/*.htm ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
