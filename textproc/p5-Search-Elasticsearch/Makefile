# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD$

PORTNAME=	Search-Elasticsearch
PORTVERSION=	1.12
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DRTECH
PKGNAMEPREFIX=	p5-

MAINTAINER=	tj@FreeBSD.org
COMMENT=	ElasticSearch API

LICENSE=	APACHE20

BUILD_DEPENDS=	p5-Any-URI-Escape>=0:${PORTSDIR}/www/p5-Any-URI-Escape \
		p5-HTTP-Message>=0:${PORTSDIR}/www/p5-HTTP-Message \
		p5-HTTP-Tiny>=0.043:${PORTSDIR}/www/p5-HTTP-Tiny \
		p5-IO-Compress>=0:${PORTSDIR}/archivers/p5-IO-Compress \
		p5-IO-Socket-SSL>=0:${PORTSDIR}/security/p5-IO-Socket-SSL \
		p5-JSON-MaybeXS>=1.002002:${PORTSDIR}/converters/p5-JSON-MaybeXS \
		p5-JSON-XS>=0:${PORTSDIR}/converters/p5-JSON-XS \
		p5-Log-Any>=0:${PORTSDIR}/devel/p5-Log-Any \
		p5-Log-Any-Adapter>=0:${PORTSDIR}/devel/p5-Log-Any-Adapter \
		p5-Module-Runtime>=0:${PORTSDIR}/devel/p5-Module-Runtime \
		p5-Moo>=1.003:${PORTSDIR}/devel/p5-Moo \
		p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter \
		p5-Try-Tiny>=0:${PORTSDIR}/lang/p5-Try-Tiny \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-namespace-clean>=0:${PORTSDIR}/devel/p5-namespace-clean
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Log-Any-Adapter-Callback>=0:${PORTSDIR}/devel/p5-Log-Any-Adapter-Callback \
		p5-Test-Deep>=0:${PORTSDIR}/devel/p5-Test-Deep \
		p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception \
		p5-YAML>=0:${PORTSDIR}/textproc/p5-YAML

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
