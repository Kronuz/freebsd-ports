# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD$

PORTREVISION=	0
CATEGORIES=	databases lang
PKGNAMESUFFIX=	-gdbm

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Free Pascal interface to the GNU database system

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	GDBM
GDBM_DESC=	Install the GNU database manager
OPTIONS_DEFAULT=	GDBM

GDBM_LIB_DEPENDS=	libgdbm.so:${PORTSDIR}/databases/gdbm

.include "${MASTERDIR}/Makefile"
