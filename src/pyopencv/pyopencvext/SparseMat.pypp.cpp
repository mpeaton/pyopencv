// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_extra.hpp"
#include "ndarray.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "opencv_extra.hpp"
#include "boost/python/make_function.hpp"
#include "SparseMat.pypp.hpp"

namespace bp = boost::python;

static void create_4e9dc46b2911de920c7af1dfbb19412a( ::cv::SparseMat & inst, boost::python::object _sizes, int _type ){
    bool b__sizes= _sizes.ptr() != Py_None;
    int l__sizes= b__sizes? bp::len(_sizes): 0;
    std::vector< int > v__sizes(l__sizes); convert_seq_to_vector(_sizes, v__sizes);
    
    inst.create(l__sizes, b__sizes? &v__sizes[0]: 0, _type);
}

static boost::python::object erase_ce64effe5fbeb3e9588310d12240ddce( ::cv::SparseMat & inst, int i0, int i1 ){
    unsigned int hashval2;
    inst.erase(i0, i1, &hashval2);
    return bp::object( hashval2 );
}

static boost::python::object erase_ca8730dab3cfc35be7d8c7cfc84bf06f( ::cv::SparseMat & inst, int i0, int i1, int i2 ){
    unsigned int hashval2;
    inst.erase(i0, i1, i2, &hashval2);
    return bp::object( hashval2 );
}

static boost::python::object erase_7ee4e9a1250db62333754bd289edbba8( ::cv::SparseMat & inst, boost::python::object idx ){
    unsigned int hashval2;
    bool b_idx= idx.ptr() != Py_None;
    int l_idx= b_idx? bp::len(idx): 0;
    std::vector< int > v_idx(l_idx); convert_seq_to_vector(idx, v_idx);
    
    inst.erase(b_idx? &v_idx[0]: 0, &hashval2);
    return bp::object( hashval2 );
}

static boost::python::object hash_19477be6a05d6299f1601326adc61332( ::cv::SparseMat const & inst, boost::python::object idx ){
    bool b_idx= idx.ptr() != Py_None;
    int l_idx= b_idx? bp::len(idx): 0;
    std::vector< int > v_idx(l_idx); convert_seq_to_vector(idx, v_idx);
    
    ::size_t result = inst.hash(b_idx? &v_idx[0]: 0);
    return bp::object( result );
}

static boost::shared_ptr<cv::SparseMat> SparseMat__init1__(const bp::sequence &_sizes, int _type)
{
    std::vector<int> _sizes2; convert_seq_to_vector(_sizes, _sizes2);
    return boost::shared_ptr<cv::SparseMat>(new cv::SparseMat(_sizes2.size(), &_sizes2[0], _type));
}

static bp::object my_size(cv::SparseMat const &inst, int i = -1)
{
    if(i >= 0) return bp::object(inst.size(i));
    
    bp::list l;
    const int *sz = inst.size();
    for(i = 0; i < inst.dims(); ++i) l.append(bp::object(sz[i]));
    return bp::tuple(l);
}

void register_SparseMat_class(){

    { //::cv::SparseMat
        typedef bp::class_< cv::SparseMat > SparseMat_exposer_t;
        SparseMat_exposer_t SparseMat_exposer = SparseMat_exposer_t( "SparseMat", bp::init< cv::Mat const &, bp::optional< bool > >(( bp::arg("m"), bp::arg("try1d")=(bool)(false) )) );
        bp::scope SparseMat_scope( SparseMat_exposer );
        SparseMat_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::SparseMat >() );
        bp::scope().attr("MAGIC_VAL") = (int)cv::SparseMat::MAGIC_VAL;
        bp::scope().attr("MAX_DIM") = (int)cv::SparseMat::MAX_DIM;
        bp::scope().attr("HASH_SCALE") = (int)cv::SparseMat::HASH_SCALE;
        bp::scope().attr("HASH_BIT") = (int)cv::SparseMat::HASH_BIT;
        SparseMat_exposer.def( bp::init< cv::MatND const & >(( bp::arg("m") )) );
        bp::implicitly_convertible< cv::MatND const &, cv::SparseMat >();
        SparseMat_exposer.def( bp::init< >() );
        SparseMat_exposer.def( bp::init< cv::SparseMat const & >(( bp::arg("m") )) );
        { //::cv::SparseMat::addref
        
            typedef void ( ::cv::SparseMat::*addref_function_type )(  ) ;
            
            SparseMat_exposer.def( 
                "addref"
                , addref_function_type( &::cv::SparseMat::addref ) );
        
        }
        { //::cv::SparseMat::assignTo
        
            typedef void ( ::cv::SparseMat::*assignTo_function_type )( ::cv::SparseMat &,int ) const;
            
            SparseMat_exposer.def( 
                "assignTo"
                , assignTo_function_type( &::cv::SparseMat::assignTo )
                , ( bp::arg("m"), bp::arg("type")=(int)(-0x000000001) ) );
        
        }
        { //::cv::SparseMat::channels
        
            typedef int ( ::cv::SparseMat::*channels_function_type )(  ) const;
            
            SparseMat_exposer.def( 
                "channels"
                , channels_function_type( &::cv::SparseMat::channels ) );
        
        }
        { //::cv::SparseMat::clear
        
            typedef void ( ::cv::SparseMat::*clear_function_type )(  ) ;
            
            SparseMat_exposer.def( 
                "clear"
                , clear_function_type( &::cv::SparseMat::clear ) );
        
        }
        { //::cv::SparseMat::clone
        
            typedef ::cv::SparseMat ( ::cv::SparseMat::*clone_function_type )(  ) const;
            
            SparseMat_exposer.def( 
                "clone"
                , clone_function_type( &::cv::SparseMat::clone ) );
        
        }
        { //::cv::SparseMat::convertTo
        
            typedef void ( ::cv::SparseMat::*convertTo_function_type )( ::cv::SparseMat &,int,double ) const;
            
            SparseMat_exposer.def( 
                "convertTo"
                , convertTo_function_type( &::cv::SparseMat::convertTo )
                , ( bp::arg("m"), bp::arg("rtype"), bp::arg("alpha")=1 ) );
        
        }
        { //::cv::SparseMat::convertTo
        
            typedef void ( ::cv::SparseMat::*convertTo_function_type )( ::cv::Mat &,int,double,double ) const;
            
            SparseMat_exposer.def( 
                "convertTo"
                , convertTo_function_type( &::cv::SparseMat::convertTo )
                , ( bp::arg("m"), bp::arg("rtype"), bp::arg("alpha")=1, bp::arg("beta")=0 ) );
        
        }
        { //::cv::SparseMat::convertTo
        
            typedef void ( ::cv::SparseMat::*convertTo_function_type )( ::cv::MatND &,int,double,double ) const;
            
            SparseMat_exposer.def( 
                "convertTo"
                , convertTo_function_type( &::cv::SparseMat::convertTo )
                , ( bp::arg("m"), bp::arg("rtype"), bp::arg("alpha")=1, bp::arg("beta")=0 ) );
        
        }
        { //::cv::SparseMat::copyTo
        
            typedef void ( ::cv::SparseMat::*copyTo_function_type )( ::cv::SparseMat & ) const;
            
            SparseMat_exposer.def( 
                "copyTo"
                , copyTo_function_type( &::cv::SparseMat::copyTo )
                , ( bp::arg("m") ) );
        
        }
        { //::cv::SparseMat::copyTo
        
            typedef void ( ::cv::SparseMat::*copyTo_function_type )( ::cv::Mat & ) const;
            
            SparseMat_exposer.def( 
                "copyTo"
                , copyTo_function_type( &::cv::SparseMat::copyTo )
                , ( bp::arg("m") ) );
        
        }
        { //::cv::SparseMat::copyTo
        
            typedef void ( ::cv::SparseMat::*copyTo_function_type )( ::cv::MatND & ) const;
            
            SparseMat_exposer.def( 
                "copyTo"
                , copyTo_function_type( &::cv::SparseMat::copyTo )
                , ( bp::arg("m") ) );
        
        }
        { //::cv::SparseMat::create
        
            typedef void ( *create_function_type )( ::cv::SparseMat &,boost::python::object,int );
            
            SparseMat_exposer.def( 
                "create"
                , create_function_type( &create_4e9dc46b2911de920c7af1dfbb19412a )
                , ( bp::arg("inst"), bp::arg("_sizes"), bp::arg("_type") ) );
        
        }
        { //::cv::SparseMat::depth
        
            typedef int ( ::cv::SparseMat::*depth_function_type )(  ) const;
            
            SparseMat_exposer.def( 
                "depth"
                , depth_function_type( &::cv::SparseMat::depth ) );
        
        }
        { //::cv::SparseMat::dims
        
            typedef int ( ::cv::SparseMat::*dims_function_type )(  ) const;
            
            SparseMat_exposer.def( 
                "dims"
                , dims_function_type( &::cv::SparseMat::dims ) );
        
        }
        { //::cv::SparseMat::elemSize
        
            typedef ::size_t ( ::cv::SparseMat::*elemSize_function_type )(  ) const;
            
            SparseMat_exposer.def( 
                "elemSize"
                , elemSize_function_type( &::cv::SparseMat::elemSize ) );
        
        }
        { //::cv::SparseMat::elemSize1
        
            typedef ::size_t ( ::cv::SparseMat::*elemSize1_function_type )(  ) const;
            
            SparseMat_exposer.def( 
                "elemSize1"
                , elemSize1_function_type( &::cv::SparseMat::elemSize1 ) );
        
        }
        { //::cv::SparseMat::erase
        
            typedef boost::python::object ( *erase_ce64effe5fbeb3e9588310d12240ddce_function_type )( ::cv::SparseMat &,int,int );
            
            SparseMat_exposer.def( 
                "erase_ce64effe5fbeb3e9588310d12240ddce"
                , erase_ce64effe5fbeb3e9588310d12240ddce_function_type( &erase_ce64effe5fbeb3e9588310d12240ddce )
                , ( bp::arg("inst"), bp::arg("i0"), bp::arg("i1") ) );
        
        }
        { //::cv::SparseMat::erase
        
            typedef boost::python::object ( *erase_ca8730dab3cfc35be7d8c7cfc84bf06f_function_type )( ::cv::SparseMat &,int,int,int );
            
            SparseMat_exposer.def( 
                "erase_ca8730dab3cfc35be7d8c7cfc84bf06f"
                , erase_ca8730dab3cfc35be7d8c7cfc84bf06f_function_type( &erase_ca8730dab3cfc35be7d8c7cfc84bf06f )
                , ( bp::arg("inst"), bp::arg("i0"), bp::arg("i1"), bp::arg("i2") ) );
        
        }
        { //::cv::SparseMat::erase
        
            typedef boost::python::object ( *erase_7ee4e9a1250db62333754bd289edbba8_function_type )( ::cv::SparseMat &,boost::python::object );
            
            SparseMat_exposer.def( 
                "erase_7ee4e9a1250db62333754bd289edbba8"
                , erase_7ee4e9a1250db62333754bd289edbba8_function_type( &erase_7ee4e9a1250db62333754bd289edbba8 )
                , ( bp::arg("inst"), bp::arg("idx") ) );
        
        }
        { //::cv::SparseMat::hash
        
            typedef ::size_t ( ::cv::SparseMat::*hash_function_type )( int ) const;
            
            SparseMat_exposer.def( 
                "hash"
                , hash_function_type( &::cv::SparseMat::hash )
                , ( bp::arg("i0") ) );
        
        }
        { //::cv::SparseMat::hash
        
            typedef ::size_t ( ::cv::SparseMat::*hash_function_type )( int,int ) const;
            
            SparseMat_exposer.def( 
                "hash"
                , hash_function_type( &::cv::SparseMat::hash )
                , ( bp::arg("i0"), bp::arg("i1") ) );
        
        }
        { //::cv::SparseMat::hash
        
            typedef ::size_t ( ::cv::SparseMat::*hash_function_type )( int,int,int ) const;
            
            SparseMat_exposer.def( 
                "hash"
                , hash_function_type( &::cv::SparseMat::hash )
                , ( bp::arg("i0"), bp::arg("i1"), bp::arg("i2") ) );
        
        }
        { //::cv::SparseMat::hash
        
            typedef boost::python::object ( *hash_19477be6a05d6299f1601326adc61332_function_type )( ::cv::SparseMat const &,boost::python::object );
            
            SparseMat_exposer.def( 
                "hash_19477be6a05d6299f1601326adc61332"
                , hash_19477be6a05d6299f1601326adc61332_function_type( &hash_19477be6a05d6299f1601326adc61332 )
                , ( bp::arg("inst"), bp::arg("idx") ) );
        
        }
        { //::cv::SparseMat::nzcount
        
            typedef ::size_t ( ::cv::SparseMat::*nzcount_function_type )(  ) const;
            
            SparseMat_exposer.def( 
                "nzcount"
                , nzcount_function_type( &::cv::SparseMat::nzcount ) );
        
        }
        { //::cv::SparseMat::operator=
        
            typedef ::cv::SparseMat & ( ::cv::SparseMat::*assign_function_type )( ::cv::SparseMat const & ) ;
            
            SparseMat_exposer.def( 
                "assign"
                , assign_function_type( &::cv::SparseMat::operator= )
                , ( bp::arg("m") )
                , bp::return_self< >() );
        
        }
        { //::cv::SparseMat::operator=
        
            typedef ::cv::SparseMat & ( ::cv::SparseMat::*assign_function_type )( ::cv::Mat const & ) ;
            
            SparseMat_exposer.def( 
                "assign"
                , assign_function_type( &::cv::SparseMat::operator= )
                , ( bp::arg("m") )
                , bp::return_self< >() );
        
        }
        { //::cv::SparseMat::operator=
        
            typedef ::cv::SparseMat & ( ::cv::SparseMat::*assign_function_type )( ::cv::MatND const & ) ;
            
            SparseMat_exposer.def( 
                "assign"
                , assign_function_type( &::cv::SparseMat::operator= )
                , ( bp::arg("m") )
                , bp::return_self< >() );
        
        }
        { //::cv::SparseMat::release
        
            typedef void ( ::cv::SparseMat::*release_function_type )(  ) ;
            
            SparseMat_exposer.def( 
                "release"
                , release_function_type( &::cv::SparseMat::release ) );
        
        }
        { //::cv::SparseMat::resizeHashTab
        
            typedef void ( ::cv::SparseMat::*resizeHashTab_function_type )( ::size_t ) ;
            
            SparseMat_exposer.def( 
                "resizeHashTab"
                , resizeHashTab_function_type( &::cv::SparseMat::resizeHashTab )
                , ( bp::arg("newsize") ) );
        
        }
        { //::cv::SparseMat::type
        
            typedef int ( ::cv::SparseMat::*type_function_type )(  ) const;
            
            SparseMat_exposer.def( 
                "type"
                , type_function_type( &::cv::SparseMat::type ) );
        
        }
        SparseMat_exposer.def_readwrite( "flags", &cv::SparseMat::flags );
        SparseMat_exposer.def("__init__", bp::make_constructor(&SparseMat__init1__, bp::default_call_policies(), ( bp::arg("_sizes"), bp::arg("_type") )));
        SparseMat_exposer.def("size", (void (*)(int))(&my_size), (bp::arg("i")=bp::object(-1)));
    }

}
