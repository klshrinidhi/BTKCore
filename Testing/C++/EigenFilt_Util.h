#ifndef EigenFilterUtil_h
#define EigenFilterUtil_h

void generateRawData(Eigen::Matrix<double, Eigen::Dynamic, 1>& data)
{
  data = Eigen::Matrix<double, Eigen::Dynamic, 1>(81, 1);
  data << 0.269703731206477, 0.463280352306786, 0.930563768125370, 1.078946949549231, 1.194295283530987, 1.175770334809470, 1.335570597453283, 1.138179593691140, 0.591985025074901, 0.365663688246287,
          0.193123934193130,-0.076769620993745,-0.470589666696020,-0.633470208144097,-0.791750441513157,-0.945077807755366,-0.569951832837199,-0.664999127882868,-0.252994289383051,-0.292482704101055,
          0.169532235220944, 0.339272182430294, 0.713311203218805, 1.187410054950967, 1.292857898102664, 1.069412447168154, 1.165409951864472, 0.926972676760604, 0.948934113981400, 0.341571958093224,
          0.314989959999267,-0.239253596594917,-0.299790071595336,-0.716214329883650,-0.868201523175111,-0.913547156190190,-0.560388298310784,-0.656277391823677,-0.333669693713655,-0.290391378754740,
          0.092827351802466, 0.658953145958277, 0.771842271516818, 0.810242424037818, 1.137033026731125, 1.329628757264276, 1.299810744975812, 0.929446804806652, 0.682187335043924, 0.641648299466557,
          0.175101042347375,-0.106182071823457,-0.513595421199354,-0.748417564782247,-0.588334265353110,-0.602900038579538,-0.795023940560176,-0.478292774132147,-0.206162179418395, 0.048519829365884,
          0.336402502123166, 0.582330657355051, 0.656503756869407, 0.904037516602165, 1.124770579730638, 1.010024873900500, 1.058515153260482, 1.201080732412561, 0.712862233995693, 0.537717651352272,
          0.244665286955628, 0.051598231788180, -0.429369284137859,-0.531910332049587,-0.869262186495577,-0.974858885406200,-0.702102159441466,-0.533809163655190,-0.469071199013479,-0.080392258002275,
          0.126489024340900;
};

#endif // EigenFilterUtil_h