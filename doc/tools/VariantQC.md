### VariantQC tool help
	VariantQC (0.1-563-g5bbcca6)
	
	Calculates QC metrics on variant lists.
	
	Mandatory parameters:
	  -in <file>      Input VCF variant list. If a specific column
	
	Optional parameters:
	  -ignore_filter  Ignore filter entries, i.e. consider variants that did not pass filters.
	                  Default value: 'false'
	  -out <file>     Output qcML file. If unset, writes to STDOUT.
	                  Default value: ''
	  -txt            Writes TXT format instead of qcML.
	                  Default value: 'false'
	
	Special parameters:
	  --help          Shows this help and exits.
	  --version       Prints version and exits.
	  --changelog     Prints changeloge and exits.
	  --tdx           Writes a Tool Definition Xml file. The file name is the application name with the suffix '.tdx'.
	
### VariantQC changelog
	VariantQC 0.1-563-g5bbcca6
	
	2017-01-05 Added 'ignore_filter' flag.
[back to ngs-bits](https://github.com/imgag/ngs-bits)