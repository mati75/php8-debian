ext_PACKAGES    += xml
xml_DESCRIPTION := DOM, SimpleXML, WDDX, XML, and XSL
xml_EXTENSIONS  := dom simplexml wddx xml xmlreader xmlwriter xsl
dom_config = \
	--enable-dom=shared \
	--with-libxml=/usr
simplexml_config = \
	--enable-simplexml=shared \
	--with-libxml=/usr
wddx_config = \
	--enable-wddx=shared \
	--with-libxml=/usr
xml_config = \
	--enable-xml=shared \
	--with-libxml=/usr
xml_PRIORITY := 15
xmlreader_config = \
	--enable-xmlreader=shared \
	--with-libxml=/usr
xmlwriter_config = \
	--enable-xmlwriter=shared \
	--with-libxml=/usr
xsl_config      := --with-xsl=shared,/usr
export xml_PRIORITY
export xml_EXTENSIONS
export xml_DESCRIPTION
