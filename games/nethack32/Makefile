# Created by: asami
# $FreeBSD$

PORTNAME=	nethack32
PORTVERSION=	3.2.3
PORTREVISION=	6
CATEGORIES=	games
MASTER_SITES=	SF/${TRUEPORTNAME}/${TRUEPORTNAME}/3.2.2
DISTNAME=	nethack-322

PATCH_SITES=	${MASTER_SITE_SOURCEFORGE:C/%SUBDIR%/${TRUEPORTNAME}\/${TRUEPORTNAME}\/${PORTVERSION}/}
PATCHFILES=	nh-3.2.2-3.2.3.diff

MAINTAINER=	glewis@FreeBSD.org
COMMENT=	Dungeon explorin', slashin', hackin' game

WRKSRC=		${WRKDIR}/${TRUEPORTNAME}-3.2.2

USES=		tar:tgz
USE_XORG=	xaw xpm
PLIST_SUB=	HACKNAME="${HACKNAME}" \
		HACKEXT="${HACKEXT}"
MAKE_JOBS_UNSAFE=	yes
TRUEPORTNAME=	nethack

HACKEXT?=	32
HACKNAME?=	${TRUEPORTNAME}${HACKEXT}
HACKDIR?=	share/${HACKNAME}
HACKLINK=	${TRUEPORTNAME}

DATADIR=	${PREFIX}/${HACKDIR}
DOCSDIR=	${PREFIX}/share/doc/${HACKNAME}
PKGDEINSTALL=	${WRKDIR}/pkg-deinstall

OPTIONS_DEFINE=	DOCS

.include <bsd.port.pre.mk>

.if !exists(${PREFIX}/bin/${HACKLINK}) && ${HACKNAME} != ${HACKLINK}
PLIST_SUB+=	HACKLINK=""
.else
PLIST_SUB+=	HACKLINK="@comment "
.endif

post-patch:
.for f in include/config.h sys/unix/Makefile.top sys/unix/Makefile.doc
	@${REINPLACE_CMD} -e 's|%%HACKNAME%%|${HACKNAME}|g' \
		-e 's|%%HACKDIR%%|${PREFIX}/${HACKDIR}|g' \
		-e 's|%%HACKEXT%%|${HACKEXT}|g' \
		${WRKSRC}/${f}
.endfor
.for f in dgn_comp.6 dlb.6 lev_comp.6 nethack.6 recover.6
	@${REINPLACE_CMD} -e 's|%%HACKNAME%%|${HACKNAME}|g' \
		-e 's|%%HACKDIR%%|${PREFIX}/${HACKDIR}|g' \
		-e 's|%%HACKEXT%%|${HACKEXT}|g' \
		${WRKSRC}/doc/${f}
.endfor

do-configure:
	@(cd ${WRKSRC}/sys/unix && ${SH} setup.sh)

pre-install:
	@${CAT} ${FILESDIR}/pkg-deinstall.in | ${SED} \
		-e 's|%%HACKDIR%%|${HACKDIR}|g' > ${PKGDEINSTALL}

post-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}/save
.if !exists(${PREFIX}/bin/${HACKLINK}) && ${HACKNAME} != ${HACKLINK}
	@${LN} -s -f ${HACKNAME} ${STAGEDIR}${PREFIX}/bin/${HACKLINK}
.endif
	${DO_MAKE_BUILD} -C ${WRKSRC}/doc ${MAKE_ARGS} manpages

	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/Guidebook.txt ${STAGEDIR}${DOCSDIR}

.include <bsd.port.post.mk>
