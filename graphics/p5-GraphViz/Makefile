# Created by: tobez
# $FreeBSD$

PORTNAME=	GraphViz
PORTVERSION=	2.15
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	GraphViz - Perl interface to the GraphViz graphing tool

LICENSE=	ART20

BUILD_DEPENDS=	${LOCALBASE}/bin/dot:${PORTSDIR}/graphics/graphviz \
		p5-IPC-Run>=0.60:${PORTSDIR}/devel/p5-IPC-Run \
		p5-Parse-RecDescent>=1.965.001:${PORTSDIR}/devel/p5-Parse-RecDescent \
		p5-XML-Twig>=3.38:${PORTSDIR}/textproc/p5-XML-Twig
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5 tar:tgz
USE_PERL5=	configure

.include <bsd.port.mk>
